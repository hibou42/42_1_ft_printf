lors de mon eval, on m a donne un exemple de fonction pour remplacer TOUT mes recursive pour les pointeur et pour les hexadecimal.
Du coup il serai interessant de le changer =D
ALLER HOP AU BOULOT !!!!

void	putnbr_base(unsigned int n, char *str, unsigned int base, int *i)
{
	if (n >= base)
		putnbr_base(n / base, str, base, i);
	*i += write(1, str + (n % base), 1);
}
