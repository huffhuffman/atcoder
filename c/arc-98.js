// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `8
WWWWWEEE`

const n = Number(stdin.split('\n')[0])

const s = stdin.split('\n')[1].split('')

const getSumListL = val => {
  let sum = 0
  let list = []
  for (let i = 0; i < s.length; i++) {
    if (s[i - 1] === val) sum++
    list.push(sum)
  }
  return list
}

const getSumListR = val => {
  let sum = 0
  let list = []
  const rvs = [...s].reverse()
  for (let i = 0; i < rvs.length; i++) {
    if (rvs[i - 1] === val) sum++
    list.push(sum)
  }
  return list.reverse()
}

const lw = getSumListL('W')
const re = getSumListR('E')

const res = _ => {
  let min = Infinity
  for (let i = 0; i < lw.length; i++) {
    const cost = lw[i] + re[i]
    min = min > cost ? cost : min
  }
  return min
}

console.log(res())
