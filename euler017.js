function

function numberOfLetters() {
  var count = 0;
  for(int i = 1; i <= 1000; i++) {
    if(i / 10 == 0){
      switch(i % 10){
        case 1:
        case 2:
        case 6:
          count += 3;
          break;
          
        case 4:
        case 5:
        case 9:
          count += 4;
          break;

        case 3:
        case 7:
        case 8:
          count += 5;
          break;

      }
    }
  }


}
