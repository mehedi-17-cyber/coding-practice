import java.util.*;

public class RemoveDuplicates {
  public static void main(String... args) {
    
    int[] arr = {6,2,3,5,1,3,5,4,1};
    Set<Integer> uniq = new LinkedHashSet<>();
    for(int i : arr) {
      uniq.add(i);
    }
    System.out.println("Original : "+Arrays.toString(arr));
    System.out.println("Unique : "+uniq);
    
  }
}
