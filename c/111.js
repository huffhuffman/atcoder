// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')
// const stdin = require('fs').readFileSync('./test', 'utf8')
const stdin = `4
1 1 2 2 3 3`

const n = Number(stdin.split('\n')[0])

const v = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const res = _ => {
  let evens = []
  let eTup = {}
  let emax = 0
  let emax2 = 0
  let emaxi = v[0]
  let emaxi2 = v[0]
  let esum = 0
  let esum2 = 0

  let odds = []
  let oTup = {}
  let omax = 0
  let omax2 = 0
  let omaxi = v[1]
  let omaxi2 = v[1]
  let osum = 0
  let osum2 = 0

  for (let i = 0; i < v.length; i++) {
    if (i % 2 === 0) {
      esum++
      esum2++
      if (eTup[v[i]] === undefined) {
        eTup[v[i]] = 1
      } else {
        eTup[v[i]]++
        if (eTup[v[i]] > emax) {
          emax = eTup[v[i]]
          emaxi = v[i]
        }
      }
      if (emaxi !== v[i] && emax >= eTup[v[i]] && eTup[v[i]] > emax2) {
        emaxi2 = v[i]
        emax2 = eTup[v[i]]
      }
    } else {
      osum++
      osum2++
      if (oTup[v[i]] === undefined) {
        oTup[v[i]] = 1
      } else {
        oTup[v[i]]++
        if (oTup[v[i]] > omax) {
          omax = oTup[v[i]]
          omaxi = v[i]
        }
      }

      // if (omaxi !== v[i] && omax >= oTup[v[i]] && oTup[v[i]] > omax2) {
      //   console.log('y')
      //   omaxi2 = v[i]
      //   omax2 = oTup[v[i]]
      // }
    }
  }

  if (emaxi === omaxi) {
    if (emaxi !== emaxi2) {
      esum -= eTup[emaxi]
      esum2 -= eTup[emaxi2]
    } else {
      esum2 = 0
    }

    if (omaxi !== omaxi2) {
      osum -= oTup[omaxi]
      osum2 -= oTup[omaxi2]
    } else {
      osum2 = 0
    }

    console.log(omaxi, omaxi2)
    console.log(emaxi, emaxi2)

    console.log(osum, osum2)
    console.log(esum, esum2)

    return Math.min(esum + osum2, esum2 + osum)
  } else {
    console.log(234)
    esum -= eTup[emaxi]
    osum -= oTup[omaxi]
    return esum + osum
  }
}

console.log(res())
