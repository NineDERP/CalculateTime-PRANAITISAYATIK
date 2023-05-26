void getTime(int &h, int &m) {
  cout << "Input hour: ";
  cin >> setw(2)>> h;
  cout << "Input minute: ";
  cin >> setw(2)>> m;
}

int subtract(int h1, int m1, int h2, int m2) {
  int h = h2 - h1;
  if (m2 < m1)
    h--;
  if (h < 0)
    h = h + 24;
  return h;
}
int subtract(int m1, int m2) {
  if (m2 < m1)
    return m2 + 60 - m1;
  else
    return m2 - m1;
}