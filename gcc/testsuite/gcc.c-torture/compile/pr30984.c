/* { dg-require-effective-target indirect_jumps } */

int fs_exec(int ino)
{
 void *src = 0;
 if (ino)
   src = (void*)0xe000;
 goto *src;  /* { dg-error "indirect goto in function with no address-of-label expressions" { is_clang } } */
}
