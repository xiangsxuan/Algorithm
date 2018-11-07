import java.math.BigDecimal;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            BigDecimal a = sc.nextBigDecimal();
            BigDecimal b = sc.nextBigDecimal();
            if (0 == a.compareTo(b)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}

