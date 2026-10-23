import java.util.*;

public class SecondLargest {
  public static void main(String... args) {
    
    int[] a = {4, 7, 5, 9, 3, 2, 1};
    int max = Integer.MIN_VALUE;
    int sec = Integer.MIN_VALUE;
    
    for (int i : a) {
      if (i > max) {
        sec = max;
        max = i;
      } else if (i > sec && i < max) {
        sec = i;
      }
    }
    System.out.println("Second largest : " + sec);
  }
}
