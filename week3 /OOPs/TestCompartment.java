import java.util.Random;

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] compartments = new Compartment[10];
        Random random = new Random();
        
        System.out.println("=== Rail Coach Compartments ===\n");
        
        for (int i = 0; i < compartments.length; i++) {
            int randomType = random.nextInt(4) + 1;
            
            switch (randomType) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;
                case 2:
                    compartments[i] = new Ladies();
                    break;
                case 3:
                    compartments[i] = new General();
                    break;
                case 4:
                    compartments[i] = new Luggage();
                    break;
            }
        }
        
        // Display notice for each compartment (Polymorphic behavior)
        for (int i = 0; i < compartments.length; i++) {
            System.out.println("Compartment " + (i + 1) + ": " + compartments[i].notice());
        }
    }
}
