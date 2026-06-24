package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {
        // a. Create an instance of Veena and call play() method
        System.out.println("=== Test a: Veena ===");
        Veena veena = new Veena();
        veena.play();
        
        // b. Create an instance of Saxophone and call play() method
        System.out.println("\n=== Test b: Saxophone ===");
        Saxophone saxophone = new Saxophone();
        saxophone.play();
        
        // c. Place the above instances in a variable of type Playable and then call play()
        System.out.println("\n=== Test c: Playable Interface Polymorphism ===");
        
        Playable playable1 = new Veena();
        System.out.println("Playing through Playable reference (Veena):");
        playable1.play();
        
        Playable playable2 = new Saxophone();
        System.out.println("\nPlaying through Playable reference (Saxophone):");
        playable2.play();
    }
}
