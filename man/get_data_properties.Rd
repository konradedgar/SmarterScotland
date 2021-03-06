% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/get_data_properties.R
\name{get_data_properties}
\alias{get_data_properties}
\title{Get Data Properties}
\usage{
get_data_properties(data_set, property_values = FALSE)
}
\arguments{
\item{data_set}{String corresponding to \code{subject} column derived via
\code{\link[SmarterScotland]{get_available_datasets}}.}

\item{property_values}{A boolean. Defaults to \code{FALSE}. If \code{TRUE}
the function will return values for each available property. The match
is case sensitive}
}
\value{
A data frame.
}
\description{
The queries sources properties for the desired data set and
  optionally values for those properties.
}
\details{
Please note that for some of the data sets case is significant. For
  instance \code{life-expectancy} will match
  \url{http://statistics.gov.scot/data/life-expectancy} whereas
  \code{Life-Expectancy} will match
  \url{http://statistics.gov.scot/data/Life-Expectancy} the first data set
  is obsolete and maintained by The Scottish Government for the backward
  compatibility. If in doubt paste \code{dataset.value} \code{URI} obtained
  via the  \code{\link[SmarterScotland]{get_available_datasets}} function.
}
\examples{
\dontrun{
get_data_properties(data_set = "Life-Expectancy")
get_data_properties(data_set = "Life-Expectancy", property_values = TRUE)
}
}
