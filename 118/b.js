const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const [head, ...rest] = stdin.split('\n').filter(e => e)

const [n, m] = head.split(' ').map(Number)

const ka = rest.map(e => e.split(' ').map(Number))

let commons = []

ka.forEach((e, i) => {
  const [k, ...a] = e

  if (i === 0) {
    commons = a
  } else {
    const filtered = a.filter(v => {
      return commons.indexOf(v) > -1
    })

    commons = filtered
  }
})

console.log(commons.length)
