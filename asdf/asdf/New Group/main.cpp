//
//  main.cpp
//  asdf
//
//  Created by Myeongjin Lee on 1/27/20.
//  Copyright © 2020 Myeongjin Lee. All rights reserved.
//

#include <iostream>
#include <unistd.h>
#include <stdio.h>

/*void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    
    i = 0;
    while (tab[i] != '\0')
    {
        write(1, tab, i);
        i++;
    }
    return (i);
}*/

/*void swap();

void    ft_(int *tab, int size) {
    int i = 1;
    while (i < size / 2) {
        swap(*tab[i - 1], *tab[size - i])
        swap(*tab[i - 1], *tab[size - i]);
    }
}

void sort(int *tab, int size) {
    int i;
    int point = 0;
    while (point < size)
    {
        i = 1;
        while (i < size - point)
        {
            if (tab[i - 1] > tab[size - i])
                swap(*tab[i - 1], *tab[size - i])
            i++;
        }
        point++;
    }
}*/

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
     int i;

     i = 0;
     while (str[i] != '\0')
     {
         ft_putchar(str[i]);
         i++;
     }
}

//int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
/*int main(void)
{
    int *tab = "123456";
    ft_rev_int_tab(tab);
    return 0;
}*/
int main()
{
    int str = "123456";
    ft_putchar(str);
    return 0;
}


//}
