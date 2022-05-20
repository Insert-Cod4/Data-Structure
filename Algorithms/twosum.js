array = [2,7,11,15]

let target = 9;

let nMap = new Map;

for(int i  = 0; i < array.length;i++)
{
  if(nMap.has(target - array[i]))
    console.log(i + " " + nMap.get(target -array[i]))
  else
    nMap.set(array[i] ,i)
}
