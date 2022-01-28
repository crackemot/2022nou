package com.company;

public class Main {

    public static void main(String[] args) {
        long time = System.currentTimeMillis();
        double [][] a = new double[100][100];
        double [][] b = new double[100][100];
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < 100; j++)
            {
                a[i][j] = i*j*13.26673;
            }
        }
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < 100; j++)
            {
                b[i][j] = i*j*17.36934;
            }
        }
        double [][] c = new double[100][100];
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < 100; j++)
            {
                c[i][j]=a[i][j]*b[i][j];
            }
        }
        System.out.println(System.currentTimeMillis() - time);
    }
}