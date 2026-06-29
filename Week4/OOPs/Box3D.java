public class Box3D extends Box {
    
    public Box3D() {
        super();
    }
    
    public Box3D(double length, double breadth, double height) {
        super(length, breadth, height);
    }
    
    public double getVolume() {
        return length * breadth * height;
    }
    
    @Override
    public String toString() {
        return "Box3D(length=" + length + ", breadth=" + breadth + ", height=" + height + 
               ", area=" + getArea() + ", volume=" + getVolume() + ")";
    }
    
    public static void main(String[] args) {
        System.out.println("=== Box ===");
        Box box = new Box(5, 4, 3);
        System.out.println(box);
        System.out.println("Area: " + box.getArea());
        
        System.out.println("\n=== Box3D ===");
        Box3D box3d = new Box3D(5, 4, 3);
        System.out.println(box3d);
        System.out.println("Volume: " + box3d.getVolume());
        
        System.out.println("\n=== Box3D with Different Dimensions ===");
        Box3D box3d2 = new Box3D(10, 8, 6);
        System.out.println(box3d2);
        System.out.println("Volume: " + box3d2.getVolume());
    }
}
