package com.company;

public class Main {

    public static void main(String[] args) {
        long time = System.currentTimeMillis();
        double [][] a = new double[500][500];
        double [][] atr = new double[500][500];
        for (int i = 0; i < 500; i++)
        {
            for (int j = 0; j < 500; j++)
            {
                a[i][j] = i*j*13.26673;
            }
        }
        for(int i=0; i<500; i++)
        {
            for(int j=0;j<500; j++)
            {
                atr[j][i] = a[j][i];
            }
        }
        System.out.println(System.currentTimeMillis() - time);
    }
}
