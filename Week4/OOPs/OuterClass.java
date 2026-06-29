public class OuterClass {
    public void display() {
        System.out.println("Display from Outer Class");
    }
    
    public class InnerClass {
        public void display() {
            System.out.println("Display from Inner Class");
        }
    }
    
    public static void main(String[] args) {
        OuterClass outer = new OuterClass();
        outer.display();
        
        OuterClass.InnerClass inner = outer.new InnerClass();
        inner.display();
    }
}
