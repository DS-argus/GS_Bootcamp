nSim <- 1000
n <- 20
median_all <- rep(0, nSim)

for (i in 1:nSim) {
    data_gen<-rgamma(n, shape=1, rate=2)
    median_all[i] <- median(data_gen)
}

var(median_all)