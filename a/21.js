// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `5`

const n = Number(stdin.split('\n')[0])

const bi = n
  .toString(2)
  .split('')
  .reverse()

const dec = bi
  .map((e, i) => {
    if (e === '1') return Math.pow(2, i)
    return 0
  })
  .filter(e => e)

console.log(dec.length)
dec.forEach(e => {
  console.log(e)
})
