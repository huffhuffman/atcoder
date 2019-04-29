// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1 3`

const [x, y] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const grp = [4, 6, 9, 11]

const res = _ => {
  if (x === 2 || y === 2) {
    return 'No'
  } else if (grp.indexOf(x) > -1) {
    if (grp.indexOf(y) > -1) {
      return 'Yes'
    } else {
      return 'No'
    }
  } else if (grp.indexOf(y) > -1) {
    return 'No'
  } else {
    return 'Yes'
  }
}

console.log(res())
