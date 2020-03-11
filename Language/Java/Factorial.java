public class Factorial {

    private static long fact(long n) {
        if (n < 2) {
            return n;
        } else {
            return n * fact(n - 1);
        }
    }
    public static long factorial(long n) {
        // pre: n >= 1
        // post: returns n!
        return fact(n);
    }
}
