// To print first 10 terms of Fibonnaci sequence
main() {
  int n=10, f1 = 0,f2 = 1;
  for (int i = 1; i<=n;i++)
  {
    print(f2);
    int next = f1 + f2;
    f1 = f2;
    f2 = next;
  }
}