void ft_div_mod(int a, int b, int *div, int *mod);

void ft_div_mod(int a, int b, int *div, int *mod)
{
	int division = a/b;
	int remainder = a%b;
	*div = division;
	*mod = remainder;
}
