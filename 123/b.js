// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '123\n123\n123\n123\n123'

const menu = stdin.split('\n').map(Number)

const lastEl = getBiggest(menu)

const index = menu.indexOf(lastEl)

menu.splice(index, 1)

const res = menu.map(el => {
  if (el % 10 === 0) return el
  return el + 10 - (el % 10)
})
.reduce((acc, curr) => {
  return acc + curr
})

console.log(res+lastEl)

function getBiggest(nums) {
  let el = 0
  const biggest = nums.reduce((acc, c) => {
    const remain = 10 - (c % 10)
    if (remain === 10) return acc
    if (remain > acc) {
      el = c
      return remain
    }
    return acc
  }, 0)
  return el
}