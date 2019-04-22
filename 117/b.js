// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `4
3 8 5 1`

const n = stdin.split('\n')[0]

const l = stdin.split('\n')[1].split(' ').map(Number)

const max = Math.max(...l)

const maxi = l.indexOf(max)

l.splice(maxi, 1)

const sum = l.reduce((p,c)=> p += c)

if(sum > max){
  console.log('Yes')
} else {
  console.log('No')
}


