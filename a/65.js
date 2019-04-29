// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `3 7 12`

const [x, a, b] = stdin.split('\n')[0].split(' ').map(Number)

const res = _ => {
  if(a>=b){
    return 'delicious'
  } else if(b-a <= x){
    return 'safe'
  } else {
    return 'dangerous'
  }
}

console.log(res())