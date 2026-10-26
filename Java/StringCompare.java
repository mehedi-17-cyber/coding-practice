public class StringCompare {
  
  static boolean isEqual(String a, String b) {
    if (a.length() != b.length()) return false;
    for (int i = 0; i < a.length(); i++) {
      if (a.charAt(i) != b.charAt(i)) return false;
    }
    return true;
  }

  public static void main(String... args) {
    
    String a = "Hello World";
    String b = "Hello World";
    
    if (isEqual(a, b)) {
      System.out.println("Equal!");
    } else {
      System.out.println("Not equal!");
    }
  }
}
