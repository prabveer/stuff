// Simple Program that gets the difference between the sum of the squares of the first 100 numbers and the sqaure of the sum of the first 100 numbers //
// Prabveer Pannu //

class Main {
    public static void main(String[] args) {
        int SumofSquares, SquareofSums;
        for (int i = 1; i <= 100; i++)
        {
            SumofSquares += i * i;

        }
        for ( int i = 1; i<= 100; i++)
        {
            SquareofSums += i;
        }
        System.out.println("he difference between the sum of the squares of the first one hundred natural numbers and the square of the sum: " + SquareofSums * SquareofSums - SumofSquares );

    }
}