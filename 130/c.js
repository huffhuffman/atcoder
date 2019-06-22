// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `2 2 1 1`

const [w, h, x, y] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  const area = w * h

  if (x === 0 || x === w || y === 0 || y === h) {
    return `${area / 2} 0`
  }
  const min = Math.min(w, h)
  const diag = (min * min) / 2

  const xh = x * h
  const xhMin = Math.min(xh, area - xh)

  const wy = w * y
  const wyMin = Math.min(wy, area - wy)

  if (xhMin === wyMin) {
    return `${xhMin} 1`
  } else {
    return `${Math.max(xhMin, wyMin, diag)} 0`
  }
}

console.log(ans())
