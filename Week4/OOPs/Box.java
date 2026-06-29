public class Box {
    protected double length;
    protected double breadth;
    protected double height;
    
    public Box() {
        this.length = 0;
        this.breadth = 0;
        this.height = 0;
    }
    
    public Box(double length, double breadth, double height) {
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }
    
    public void setLength(double length) {
        this.length = length;
    }
    
    public void setBreadth(double breadth) {
        this.breadth = breadth;
    }
    
    public void setHeight(double height) {
        this.height = height;
    }
    
    public double getArea() {
        return 2 * (length * breadth + breadth * height + height * length);
    }
    
    @Override
    public String toString() {
        return "Box(length=" + length + ", breadth=" + breadth + ", height=" + height + ")";
    }
}
