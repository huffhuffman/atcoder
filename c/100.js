// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `10
2184 2126 1721 1800 1024 2528 3360 1945 1280 1776`

const n = Number(stdin.split('\n')[0])

const a = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const getDiv2Count = x => {
  let count = 0
  let num = x
  while (num % 2 === 0) {
    num /= 2
    count++
  }
  return count
}

const div2CountList = a.map(getDiv2Count)

console.log(div2CountList.reduce((p, c) => p + c))
