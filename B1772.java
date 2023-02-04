import java.util.*;

public class B1772 {
  static Scanner input = new Scanner(System.in);

  public static void main(String[] args) {
    int t = input.nextInt();
    for (int A = 0; A < t; A++) {
      int[] a = new int[4];
      for (int i = 0; i < 4; i++)
        a[i] = input.nextInt();
      int m = 1000000007, M = 0;
      for (int i = 0; i < 4; i++) {
        if (a[i] < m)
          m = a[i];
      }
      for (int i = 0; i < 4; i++) {
        if (a[i] > M)
          M = a[i];
      }

      if (a[0] > a[3])
        a[0] = a[0] ^ a[3] ^ (a[3] = a[0]);
      if (a[1] > a[2])
        a[1] = a[1] ^ a[2] ^ (a[2] = a[1]);

      if ((a[0] == m && a[3] == M) || (a[1] == m && a[2] == M))
        System.out.println("YES");
      else
        System.out.println("NO");
    }
  }
}