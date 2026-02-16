public class Main {
    
    public static void reverseString(String str) {
        String reversedString = ""; 
        for (int i = str.length() - 1; i >= 0; i--) {
            reversedString += str.charAt(i); 
        } 

        System.out.println(reversedString); 
    } 

    public static void main(String[] args) {
        String test = "Hello World"; 
        reverseString(test);  
    } 
} 
