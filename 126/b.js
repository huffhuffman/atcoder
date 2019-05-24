// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1905`

const s = stdin

const ans = _ => {
  const s01 = s[0] + s[1]
  const s02 = s[2] + s[3]
  const numF = Number(s01)
  const numB = Number(s02)

  let f = '' 
  let b = ''
  if(numF > 12){
    f = 'YY'
  } else if(numF === 0) {
    f = 'YY'
  } else {
    f = 'MM'
  }

  if(numB > 12){
    b = 'YY'
  } else if(numB === 0) {
    b = 'YY'
  } else {
    b = 'MM'
  }

  if(b === f){
    return b === 'MM' ? 'AMBIGUOUS' : 'NA'
  } else {
    return f+b
  }
}

console.log(ans())