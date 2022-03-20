import java.math.BigInteger;
import java.util.Scanner;
public class VeryEasyUVa {
  
    public static void main(String[] args)
    {
        // TODO code application logic here
        Scanner cin = new Scanner(System.in);
        int N, A;
        while(cin.hasNextInt()) {
            N = cin.nextInt();
            A = cin.nextInt();
            BigInteger sum = new BigInteger("0"),
                                tmpA = BigInteger.valueOf(A);
            for(int i = 1; i <= N; i++)
                sum = sum.add(BigInteger.valueOf(i).multiply(tmpA.pow(i)));
            System.out.println(sum);

    }
}
}