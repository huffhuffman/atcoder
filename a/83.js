// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `3 8 7 1`

const [a, b, c, d] = stdin.split('\n')[0].split(' ').map(Number)

const res = x => {
  const l = a + b
  const r = c + d

  if(l === r){
    return 'Balanced'
  } else if ( l < r){
    return 'Right'
  } else {
    return 'Left'
  }
}

console.log(res())