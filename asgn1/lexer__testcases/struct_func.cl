-- typedef struct
-- {
--   char a;
--   int b;
--   char c;
--   short d;
--   double e;
--   char name[10];
--   char f;
-- } T;

-- void f (T x)
-- {
--   x.a = 'a';
--   x.b = 47114711;
--   x.c = 'c';
--   x.d = 1234;
--   x.e = 3.141592897932;
--   x.f = '*';
--   x.name = "abc";
-- }

-- int main (){
--     T k;
--     f(k);
--     return 0;
-- }

class T {
  a : Char;
  b : Int;
  c : Char;
  d : Short;
  e : Double;
  name : String;
  f : Char;
  
  init() : SELF_TYPE {
    {
      a <- 'm';
      b <- 47114711;
      c <- 'c';
      d <- 1234;
      e <- 3.141592897932;
      f <- '*';
      name <- "\"abc";
      self;
    }
  };
};

class Main {
  main() : Int {
    {
      k : T;
      k.init();
      kjhgkjg@hgfhghf
      return 0;
    }
  };
};
