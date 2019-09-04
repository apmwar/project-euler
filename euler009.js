function triples() {
  var a = 0, b = 0, c = 0;
  var s = 1000;
  var found = false;
  for(a = 1; a < s / 3; a++) {
    for(b = a; b < s / 2; b++) {
      c = s - a - b;
      if(a*a + b*b == c*c) {
        found = true;
        break;
      }
    }
    if(found) {
      break;
    }
  }
  console.log(a, b, c)
  console.log(a*b*c)
}

triples();
