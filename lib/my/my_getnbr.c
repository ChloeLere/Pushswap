/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** lib
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int c = 0;
    int nbr = -1;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            nbr = nbr * (-1);
        i++;
    }
    while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0') {
        if (c < ((-2147483648 + str[i] -'0') / 10))
            return (0);
        c = (c * 10) - (str[i] - '0');
        i++;
    }
    if (nbr == -1 && c == -2147483648)
        return (0);
    return (c * nbr);
}

int my_getnbr_with_i(char const *str, int i)
{
    int nb = 0;
    int m = 1;

    while (!(str[i] >=  '0' && str[i] <= '9' ) && str[i] != '-') {
        i++;
    }
    for (; str[i] != '\0' && str[i] >= '0' && str[i] <= '9'
    || str[i] == '-'; i++) {
        if (str[i] == '-') {
            m = m * (- 1);
            i++;
        }
        nb = (nb + str[i] - 48) * 10;
    }
    nb = nb / 10;
    return (nb * m);
}
