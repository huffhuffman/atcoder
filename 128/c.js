// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `5 2
3 1 2 5
2 2 3
1 0`

const [n, m] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const [, ..._ks] = stdin.trim().split('\n')
let ks = _ks.map(e => e.split(' ').map(Number))
const p = ks.pop()

const ans = _ => {
  const bulbs = Array(m).fill(null)

  ks.map(([k, ..._s], i) => {
    const s = _s.map(e => e - 1)

    let switches = Array(n).fill(0)

    s.forEach(v => {
      switches[v] = 1
    })

    bulbs[i] = switches
  })

  let sum = 0
  for (let i = 0; i < 1 << n; i++) {
    let iStr = i.toString(2)
    let filler = ''
    for (let j = 0; j < n - iStr.length; j++) {
      filler += '0'
    }
    const iArr = (filler + iStr).split('').map(Number)

    const bulbSwitchOnCounts = bulbs.map(b=>{
      return b.filter((e,i)=>{
        return iArr[i] & e
      }).length
    })

    const onBulbs = bulbSwitchOnCounts.filter((e,i)=>{
      return e%2 === p[i]
    }).length

    sum += onBulbs === m ? 1 : 0
  }

  console.log(sum)
}

ans()
