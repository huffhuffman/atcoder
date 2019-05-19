// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')
const stdin = require('fs').readFileSync('./test', 'utf8')

// const stdin = `4
// 1 1 2 2 3 3`

const n = Number(stdin.split('\n')[0])

const v = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const getHighFreqSeq = _ => {
  let euniqsObj = {}
  let euniqs = []
  let eseqs = []
  let emax = 0
  let emaxi = 0

  let ouniqsObj = {}
  let ouniqs = []
  let oseqs = []
  let omax = 0
  let omaxi = 0
  
  for (let i = 0; i < v.length; i++) {
    if (i % 2 === 0) {
      const euniqIdx = euniqsObj[v[i]]
      if (euniqIdx === undefined) {
        euniqs.push(v[i])
        euniqsObj[v[i]] = euniqs.length-1
        eseqs.push(1)
      } else {
        eseqs[euniqIdx]++
        if (eseqs[euniqIdx] > emax) {
          emax = eseqs[euniqIdx]
          emaxi = euniqIdx
        }
      }
    } else {
      const ouniqIdx = ouniqsObj[v[i]]
      if (ouniqIdx === undefined) {
        ouniqs.push(v[i])
        ouniqsObj[v[i]] = ouniqs.length-1
        oseqs.push(1)
      } else {
        oseqs[ouniqIdx]++
        if (oseqs[ouniqIdx] > omax) {
          omax = oseqs[ouniqIdx]
          omaxi = ouniqIdx
        }
      }
    }
  }

  return {
    e: {
      max: emax,
      maxi: emaxi,
      seqs: eseqs,
      uniqs: euniqs,
    },

    o: {
      max: omax,
      maxi: omaxi,
      seqs: oseqs,
      uniqs: ouniqs,
    },
  }
}

const res = _ => {
  const { e, o } = getHighFreqSeq()

  const eMIdx = e.maxi
  const oMIdx = o.maxi
  const eMaxFreq = e.uniqs[eMIdx]
  const oMaxFreq = o.uniqs[oMIdx]

  e.seqs.sort((a, b) => b - a)
  o.seqs.sort((a, b) => b - a)

  let esum = 0
  let esum2 = 0
  let osum = 0
  let osum2 = 0

  for (let i = 0; ; i++) {
    if (i !== 0 && e.seqs.length > i) {
      esum += e.seqs[i]
    }
    if (i !== 1 && e.seqs.length > i) {
      esum2 += e.seqs[i]
    }

    if (i !== 0 && o.seqs.length > i) {
      osum += o.seqs[i]
    }
    if (i !== 1 && o.seqs.length > i) {
      osum2 += o.seqs[i]
    }

    if (e.seqs.length <= i && o.seqs.length <= i) {
      break
    }
  }

  if (eMaxFreq === oMaxFreq) {
    return Math.min(esum + osum2, esum2 + osum)
  } else {
    return esum + osum
  }
}

console.log(res())
