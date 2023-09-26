import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

class Demo {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        BigInteger n = sc.nextBigInteger();
        BigInteger k = sc.nextBigInteger();

        BigInteger x = (n.subtract(k)).divide(BigInteger.valueOf(2));
        BigInteger y = x.add(k);
        System.out.println(x);
        System.out.println(y);
        sc.close();
    }
}
