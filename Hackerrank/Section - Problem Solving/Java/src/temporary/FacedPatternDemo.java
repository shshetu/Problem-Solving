package temporary;

public class FacedPatternDemo {
    public static void main(String[] args) {
        //create an instance of ShapeMaker
        ShapeMaker shapeMaker = new ShapeMaker();
        shapeMaker.drawCircle();
        shapeMaker.drawRectangle();
        shapeMaker.drawSquare();
    }
}

//create Shape Interface
interface Shape {
    public void draw();
}
//Implement to 3 classess: Circle, Rectangle, Square
class Circle implements Shape{

    @Override
    public void draw() {
        System.out.println("Circle : draw()");
    }
}
class Rectangle implements Shape{
    @Override
    public void draw() {
        System.out.println("Rectangle : draw()");
    }
}
class Square implements Shape{
    @Override
    public void draw() {
        System.out.println("Square : draw()");
    }
}
//Create ShapeMaker class and inside that create an instance of 3 shapes
class ShapeMaker{
    //create 3 private objects
    private Circle circle;
    private Rectangle rectangle;
    private Square square;

    //constructor
    public ShapeMaker(){
        circle = new Circle();
        rectangle = new Rectangle();
        square = new Square();
    }
    //create 3 public methods
    public void drawCircle(){
        circle.draw();;
    }
    public void drawRectangle(){
        rectangle.draw();
    }
    public void drawSquare(){
        square.draw();
    }
}
//Inside the class FacedPatternDemo create an object of the ShapeMaker class and call the required methods
