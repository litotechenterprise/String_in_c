
const PlaySong = (times) => {
    const OG = times;
    while(times > 0){
        console.log(times + " bottles of beer on the wall, " + times + " bottles of beer");
        times--;
        console.log("Take one down pass it around, " + times + " bottles of beer on the wall");
        console.log(" ");
    }
    console.log("Not More bottles of beer on the wall, no more bottles of beer");
    console.log("Go to the store and buy some more, " +OG+ " bottles of beer on the wall");
    console.log(" ");
};


PlaySong(20);