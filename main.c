#include <stdio.h>
#include <stdlib.h>

struct wilc_cfg_str {
	unsigned short id;
	unsigned char *str;
};

struct wilc_cfg_str_vals {
  unsigned char mac_address[7];
  unsigned char firmware_version[129];
  unsigned char assoc_rsp[256];
};

static const struct wilc_cfg_str g_cfg_str[] = {
	{0x3001, NULL},
	{0x300C, NULL},
	{0x3020, NULL},
	{0xffff, NULL}
};

int main()
{
  struct wilc_cfg_str_vals *str_vals;

  str_vals = calloc(1, sizeof(*str_vals)); 
  printf("%p, %p, %d\n", str_vals->assoc_rsp, &str_vals->assoc_rsp[0], str_vals->assoc_rsp[0]);

  printf("%ld\n", sizeof(g_cfg_str) / sizeof(g_cfg_str[0]));

  /*
  printf("%ld, %ld, %ld\n", sizeof(str_vals), sizeof(*str_vals), sizeof(struct wilc_cfg_str_vals));
	printf("%ld, %ld, %ld, %ld\n", sizeof(unsigned short), sizeof(unsigned char *), sizeof(g_cfg_str), sizeof(struct wilc_cfg_str));
  */

  return 0;
}
