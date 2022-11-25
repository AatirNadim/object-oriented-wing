import java.util.Random;
class Square extends Thread {
    int x;
    Square(int x) {
        this.x = x;
    }
    public void run() {
        System.out.println("Square of " + x + " --> " + x*x);
    }
}
class Cube extends Thread {
    int x;
    Cube(int x) {
        this.x = x;
    }
    public void run() {
        System.out.println("Cube of " + x + " --> " + x*x*x);
    }
}
class Rand extends Thread {
    public void run() {
        Random robj = new Random();
        while(true) {
            int randint = robj.nextInt(100);
            System.out.println("\nRandom integer generated --> " + randint);
            if (randint%2 == 0) {
                Square sq = new Square(randint);
                sq.start();
            }
            else {
                Cube cb = new Cube(randint);
                cb.start();
            }
            try {
                Thread.sleep(1000);
            } catch(InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

class Main {
    public static void main(String args[]) {
        Rand obj = new Rand();
        obj.start();
    }
}