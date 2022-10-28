bool czyDoskonala(int n){
  int suma = 0;
  for (int i = 1; i <= n/2; i++)
    if(n % i == 0)
      suma += i;
  return (suma == n);
}
bool czyZachwycajaca(int n) {
  int* dzielniki = new int[n / 2];
  int suma = 0, ile = 0;
  for (int i = 1; i <= n / 2; i++) {
    if (n % i == 0) {
      suma += i;
      dzielniki[ile++] = i;
    }
  }
  for (int i = 0; i < ile; i++) {
    if (n == suma - 2 * dzielniki[i]) {
      delete dzielniki;
      return true;
    }
  }
  delete dzielniki;
  return false;
}


int sumDigits(int a) {
  int w = 0;
  do {
    w += a % 10;
  } while ((a /= 10) > 0);
  return w;
}
