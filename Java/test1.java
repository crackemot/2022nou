package com.company;

public class Main {

    public static void main(String[] args) {
        long time = System.currentTimeMillis();
        for(int i=0; i<8000; i++)
        {
            System.out.println(255.234113*i);
            System.out.println(256.876383*i);
        }
        System.out.println(System.currentTimeMillis() - time);
    }
}