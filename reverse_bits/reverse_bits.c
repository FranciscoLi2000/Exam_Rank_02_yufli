
unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char	bit;

	i = 8;
	bit = 0;
	while (i--)
	{
		bit = (bit << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (bit);
}
