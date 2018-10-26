/* { dg-require-effective-target indirect_jumps } */

void* a;

void foo() {
    if ((a = &&l))
        return;

    l:;
}

int main() {
    foo();
    goto *a;  /* { dg-error "indirect goto in function with no address-of-label expressions" { is_clang } } */

    return 0;
}
