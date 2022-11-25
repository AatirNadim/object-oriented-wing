abstract class Shape {
    int x, y;
    abstract void printArea();
}

class Rectangle extends Shape {
    Rectangle(int x, int y) {
        this.x = x; this.y = y;
    }
    void printArea() {
        System.out.println("Area of rectangle --> " + x*y);
    }
}
class Triangle extends Shape {
    Triangle (int x, int y) {
        this.x = x; this.y = y;
    }
    void printArea() {
        System.out.println("Area of triangle --> " + 0.5*x*y);
    }
}
class Circle extends Shape {
    Circle(int x) {
        this.x = x;
    }
    void printArea() {
        System.out.println("Area of circle --> " + 3.14*x*x);
    }
}
class Main {
    public static void main(String args[]) {
        Shape s1 = new Rectangle(3, 4);
        Shape s2 = new Triangle(6, 7);
        Shape s3 = new Circle(6);
        s1.printArea();
        s2.printArea();
        s3.printArea();
    }
}