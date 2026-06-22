public class LibraryInterfaceDemo {
    public static void main(String[] args) {
        System.out.println("=== Test Case #1: KidUser ===");
        
        // Test Case 1 - KidUser with age 10
        System.out.println("\nTest 1a: KidUser with age 10");
        KidUser kidUser1 = new KidUser();
        kidUser1.setAge(10);
        kidUser1.registerAccount();
        
        kidUser1.setBookType("Kids");
        kidUser1.requestBook();
        
        // Test Case 1 - KidUser with age 18
        System.out.println("\nTest 1b: KidUser with age 18");
        KidUser kidUser2 = new KidUser();
        kidUser2.setAge(18);
        kidUser2.registerAccount();
        
        kidUser2.setBookType("Fiction");
        kidUser2.requestBook();
        
        System.out.println("\n=== Test Case #2: AdultUser ===");
        
        // Test Case 2 - AdultUser with age 5
        System.out.println("\nTest 2a: AdultUser with age 5");
        AdultUser adultUser1 = new AdultUser();
        adultUser1.setAge(5);
        adultUser1.registerAccount();
        
        adultUser1.setBookType("Kids");
        adultUser1.requestBook();
        
        // Test Case 2 - AdultUser with age 23
        System.out.println("\nTest 2b: AdultUser with age 23");
        AdultUser adultUser2 = new AdultUser();
        adultUser2.setAge(23);
        adultUser2.registerAccount();
        
        adultUser2.setBookType("Fiction");
        adultUser2.requestBook();
    }
}
